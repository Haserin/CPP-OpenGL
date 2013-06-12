/*************************************************
*DrawCube draws a cube of width 'x', height 'y', *
* and depth 'z' whose origin is located in the   *
*  center of the cube.                           *
*************************************************/

void DrawCube(float x, float y, float z)
{
	// Scale Diameters to Radii
	x /= 2.0f;
	y /= 2.0f;
	z /= 2.0f;
	
	glBegin(GL_QUADS);
	
	//Top Face
	glVertex3f(-x, y, z);
	glVertex3f( x, y, z);
	glVertex3f( x, y,-z);
	glVertex3f(-x, y,-z);
	
	//Bottom Face
	glVertex3f( x,-y, z);
	glVertex3f(-x,-y, z);
	glVertex3f(-x,-y,-z);
	glVertex3f( x,-y,-z);
	
	//Front Face
	glVertex3f(-x,-y, z);
	glVertex3f( x,-y, z);
	glVertex3f( x, y, z);
	glVertex3f(-x, y, z);
	
	//Back Face
	glVertex3f( x,-y,-z);
	glVertex3f(-x,-y,-z);
	glVertex3f(-x, y,-z);
	glVertex3f( x, y, z);
	
	//Right Face
	glVertex3f( x,-y, z);
	glVertex3f( x,-y,-z);
	glVertex3f( x, y,-z);
	glVertex3f( x, y, z);
	
	//Left Face
	glVertex3f(-x,-y,-z);
	glVertex3f(-x,-y, z);
	glVertex3f(-x, y, z);
	glVertex3f(-x, y,-z);
	
	glEnd();
}
