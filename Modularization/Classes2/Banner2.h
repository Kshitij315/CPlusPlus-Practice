enum Geometry{Rectangular,Triangular,Eliptical};

class Banner
{
public:
    
    Banner()
    {
        width = 20;
        height = 5;
        shape = Geometry::Rectangular;
    }

    
    void Resize(float w, float h)
    {
        width = w;  
        height = h; 
    }
//Open close principal
    void Triangulate(bool yes)
    {
        shape=yes ? Geometry::Triangular : Geometry::Rectangular;
    }

    
    double Price() const
    {
        float k ;
        float rate = width <= height ? 0.75 : 0.80;
        switch (shape)
        {
        case Geometry::Triangular:
            k=0.5;
            break;
        case Geometry::Eliptical:
            k=0.785;
            break;
        default:
        k=1.0;
            
        };
        return k * width * height * rate;
    }
////ading method
void Reshape(Geometry g)
{
    shape=g;
}    

private:
    float width, height;
    // bool triangular;
    Geometry shape;
};
