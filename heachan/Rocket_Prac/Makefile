
# Directory
SRCS_DIR :=    	src/lib
INCS_DIR :=		include
SRCS	 :=		$(wildcard $(SRCS_DIR)/*.cpp)
NAME	 :=		rocket_prac
RM		 :=		rm -rvf
CXXFLAGS :=		#-Wno-shadow #-fsanitize=thread #-g -fsanitize=leak 
# $@는 룰에서 왼쪽값을 의미한다.
# $^ SCRS를 전체를 의미한다.
# $< SCRS에서 맨 앞 하나만 의미한다.

excute:
	@echo
	@echo [$(NAME) ] excuting!!! '(by. haecjam & minsu)'
	./$(NAME)
all: $(NAME)