class Obj
{
public:
    Obj() : a(1) {}
    Obj(int c) : a(c) {}
    ~Obj() {}
private:
    int a;
};

struct Str
{
    int b;
};

Str g_str{10};
Obj g_a();

int main() {
    int a = 4;
    Obj o(a);

    a = 56;
}
