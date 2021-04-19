class NextID()
{
    static  uint32_t _id = 0;

    return _id++;
}

int main()
{
    uint32_t id = NextID();
}
