class BrazoRobotico{
	private:
		double x, y, z;
		bool holding;
	public:
		BrazoRobotico();
		double getx();
		double gety();
		double getz();
		bool isHolding();
		void coger();
		void soltar();
		void mover(double x, double y, double z);
};
