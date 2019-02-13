struct info1
{
	char hobby[10];
	int creditcardno;
	
};
struct info2
{
	char vehicleno[10];
	int distance;
};
union info
{
	struct info1 a;
	struct info2 b;
}
