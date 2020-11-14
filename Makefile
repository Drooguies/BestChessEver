CXX:=g++
CXXFLAGS:=-g -O2
IDIR:=-Iinclude
BDIR:=bin/
SDIR:=src/*
bestchessever:
	$(CXX) $(SDIR) $(IDIR) -o $(BDIR)BestChessEver
