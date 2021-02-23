
double overlap(Rect *R1,Rect *R2)
{
	Rect x1,y1,x2,y2;
	double length,heigth,area;

	x1.x = R1->x+R1->w;
	y1.y = R1->y-R1->h;
	x2.x = R2->x+R2->w;
	y2.y = R2->y-R2->h;

	length = min(x1.x,x2.x)-max(R1->x,R2->x);
	heigth = min(R1->y,R2->y)-max(y1.y,y2.y);

	area = length*heigth;

	if(area<0) return 0;
	else return area;
		
}