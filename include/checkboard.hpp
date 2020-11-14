#ifndef _CKBRD_
#define _CKBRD_

class Checkboard{

	public:

	struct Move{
		piece::Pos start,end;
	};
	Checkboard();
	~Checkboard();

	void clearBoard();
	Checkboard copy();
	std::vector<Move> generateAllMoves();

	protected:
	private:

	piece *ckbrd[8][8];
	piece::Colour turnToPlay;

};
#endif
