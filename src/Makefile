include ../conf.mk

objects = main.o 
all: $(objects) 
	g++ -o ctp_client $(objects) -L$(ROOT_DIR)/$(THIRD_LDIR) $(LUAJIT_LLIB) \
	-L$(API_LDIR) $(API_LLIB) -lpthread -lrt \
	-L$(ROOT_DIR)/$(THIRD_LDIR) $(PYTHON_LLIB) \
	$(SQLITE_LLIB) $(BOOST_LLIB) $(JSON_LLIB) 

	#todo bug,$(PYTHON_LDIR)
	cp ctp_client ../build/
	#cp -udPR  strategy ../build/


$(objects): %.o: %.cpp
	g++ -g -c -Wall    $(CFLAGS) $< -o $@ 
clean:
	rm -rf *.o
