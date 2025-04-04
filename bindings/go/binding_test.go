package tree_sitter_chariot_test

import (
	"testing"

	tree_sitter "github.com/tree-sitter/go-tree-sitter"
	tree_sitter_chariot "github.com/elysium-os/chariot/bindings/go"
)

func TestCanLoadGrammar(t *testing.T) {
	language := tree_sitter.NewLanguage(tree_sitter_chariot.Language())
	if language == nil {
		t.Errorf("Error loading Chariot grammar")
	}
}
