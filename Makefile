.PHONY: clean All

All:
	@echo "----------Building project:[ BoxStacking - Debug ]----------"
	@cd "BoxStacking" && "$(MAKE)" -f  "BoxStacking.mk"
clean:
	@echo "----------Cleaning project:[ BoxStacking - Debug ]----------"
	@cd "BoxStacking" && "$(MAKE)" -f  "BoxStacking.mk" clean
