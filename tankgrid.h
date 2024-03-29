#pragma once
namespace Tmpl8
{

	class TankGrid
	{
	public:
		TankGrid();
		void add(Tank* tank);
		void move(Tank* tank, vec2 oldposition);
		void checkcollision(Tank* tank);
		void collision(Tank* tank, Tank* other_tank);
		vector<Tank*> rocket_checkcollision(vec2 position);

		//1420/720
        static const int CELL_SIZE = 12;
		static const int NUM_CELLSx = 120;
		static const int NUM_CELLSy = 60;
		static const int NUM_CELLStotal = NUM_CELLSx * NUM_CELLSy;
	private:
        Tank* cells_[NUM_CELLSx][NUM_CELLSy];
	};
};