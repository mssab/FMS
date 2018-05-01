protected override CreatParams CreatParams
{
	get 
	{
		CreatParams param = base.CreatParams;
		param.ExStyle !=0x08000000;
		return param;
	}
}