package proteintranslation

import (
	"errors"
	"slices"
)

var (
	ErrStop        = errors.New("stop codon")
	ErrInvalidBase = errors.New("invalid base")
)

const codonLength = 3

type Protein struct {
	codons      []string
	translation string
}

var proteins = []Protein{
	{codons: []string{"AUG"}, translation: "Methionine"},
	{codons: []string{"UUU", "UUC"}, translation: "Phenylalanine"},
	{codons: []string{"UUA", "UUG"}, translation: "Leucine"},
	{codons: []string{"UCU", "UCC", "UCA", "UCG"}, translation: "Serine"},
	{codons: []string{"UAU", "UAC"}, translation: "Tyrosine"},
	{codons: []string{"UGU", "UGC"}, translation: "Cysteine"},
	{codons: []string{"UGG"}, translation: "Tryptophan"},
}

var stopCodons = []string{"UAA", "UAG", "UGA"}

func FromRNA(rna string) ([]string, error) {
	translations := []string{}

	for i := 0; i < len(rna); i += codonLength {
		if len(rna)-i < codonLength {
			return nil, ErrInvalidBase
		}

		translation, err := FromCodon(rna[i : i+codonLength])
		if err == ErrStop {
			return translations, nil
		}
		if err != nil {
			return nil, err
		}

		translations = append(translations, translation)
	}

	return translations, nil
}

func FromCodon(codon string) (string, error) {
	if slices.Contains(stopCodons, codon) {
		return "", ErrStop
	}

	for _, protein := range proteins {
		if slices.Contains(protein.codons, codon) {
			return protein.translation, nil
		}
	}

	return "", ErrInvalidBase
}
