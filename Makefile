.PHONY: clean All

All:
	@echo "----------Building project:[ CoverDistance - Debug ]----------"
	@cd "CoverDistance" && "$(MAKE)" -f  "CoverDistance.mk"
clean:
	@echo "----------Cleaning project:[ CoverDistance - Debug ]----------"
	@cd "CoverDistance" && "$(MAKE)" -f  "CoverDistance.mk" clean
