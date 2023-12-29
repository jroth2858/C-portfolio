.PHONY: no_target target clean
.DEFAULT_GOAL := no_target

include common.mk

no_target:
	@echo "Error: No target specified. Please specify a target to build."; \

clean:
	@echo "This will delete all files with the .out extension. Are you sure? (y/n)"
	@read -r answer; \
	if [ "$$answer" != "y" ]; then \
	    echo "Aborted."; \
	    exit 1; \
	fi
	@find . -type f -regex ".*\.out" -exec rm -f {} +

ifeq ($(word 2,$(MAKECMDGOALS)),)
section:
	@echo "Error: Specific section not found. Please provide a target as follows: make section 1"
	exit 1
else
%: #Prevents make from trying to execute section number as a separate target as in "make section 1"
	@exit 0

section:
	@$(MAKE) -C $(TLD)/$@_$(word 2,$(MAKECMDGOALS))
endif