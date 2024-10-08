
# Directory
SRCS_DIR 	:=		src
INCS_DIR 	:=		include
SRCS 		:=		$(wildcard $(SRCS_DIR)/*.cpp)
NAME		:=		rocket
RM 			:=		rm -rvf
CXXFLAGS	:=		#-Wno-shadow #-fsanitize=thread #-g -fsanitize=leak 
# $@는 룰에서 왼쪽값을 의미한다.
# $^ SCRS를 전체를 의미한다.
# $< SCRS에서 맨 앞 하나만 의미한다.
excute:
	@echo 
	@echo [$(NAME)] excuting!!! '(by. haechan & minsu)' 
	./$(NAME)

all: $(NAME)

$(NAME): $(SRCS)
	@echo 
	@echo [$@] linking... '(by. haechan & minsu)' 
	c++ $^ -I $(INCS_DIR) -o $@ $(CXXFLAGS)
	@echo @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
	@echo ">>>>>>>>>> $@ Compiled! <<<<<<<<<<"
	@echo @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@

clean:  # 실행파일 까지
	@echo ">>>>>>>>>>>>>>>> fclean List <<<<<<<<<<<<<<<<<<<<"
	@$(RM) $(NAME)
	@echo

re: clean
	@make all

.PHONY: all clean fclean re


