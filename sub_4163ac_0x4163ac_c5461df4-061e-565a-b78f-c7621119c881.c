// ============================================================
// 函数名称: sub_4163ac
// 虚拟地址: 0x4163ac
// WARP GUID: c5461df4-061e-565a-b78f-c7621119c881
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_416348, sub_4163ac, sub_41631c
// [被调用的父级函数]: sub_415ee0, sub_4163ac
// ============================================================

void __convention("regparm")sub_4163ac(void* arg1, int32_t arg2, int32_t arg3)
{
    // 第一条实际指令: int32_t var_14 = arg3
    int32_t var_14 = arg3
    var_14.b = arg3.b
    void* esi = arg1
    
    if (arg2.b == 0)
        *(esi + 0x20) &= 0xffef
    else
        *(esi + 0x20) |= 0x10
    
    if (var_14.b == 0)
        return 
    
    void* ebp_2 = sub_416348(esi) - 1
    
    if (ebp_2 s< 0)
        return 
    
    void* i_1 = ebp_2 + 1
    int32_t edi_1 = 0
    void* i
    
    do
        sub_41631c(esi, edi_1)
        arg3.b = 1
        arg1, arg3 = sub_4163ac(var_14)
        edi_1 += 1
        i = i_1
        i_1 -= 1
    while (i != 1)
}
