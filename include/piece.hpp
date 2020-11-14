#ifndef _PIECE_
#define _PIECE_

#include <vector>

class Checkboard;

class piece{

	public:
	piece();
	virtual ~piece();

	enum Colour{
		BLACK,
		WHITE
	};

	enum PName{
		PAWN,
		KNIGHT,
		BISHOP,
		ROOK,
		KING,
		QUEEN
	};

	struct Pos{
		int col, row;
	};

	/**
	*
	*
	*/
	virtual bool canMove(const Pos &pos, const Checkboard &ckbrd) const;
	virtual bool canTake(const Pos &pos, const Checkboard &ckbrd) const;
	virtual bool isLegal(const Pos &pos, const Checkboard &ckbrd) const;
	virtual void move(const Pos &pos, Checkboard &ckbrd);
	virtual std::vector<Pos> generateAllMoves();

	protected:

	private:
	Pos pos;
	Colour colour;
	bool moved;
	PName name;
};
#endif
