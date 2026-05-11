// ============================================================
// 函数名称: sub_49211c
// 虚拟地址: 0x49211c
// WARP GUID: c69dc0ba-9ecc-5a9d-9268-0a21fed5ae4e
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_418ee4, sub_418dd8, sub_419820, sub_4191d8, sub_491e20
// [被调用的父级函数]: 无
// ============================================================

int32_t __convention("regparm")sub_49211c(int32_t* arg1)
{
    // 第一条实际指令: int32_t* ebx = arg1[0x7c]
    int32_t* ebx = arg1[0x7c]
    sub_4191d8(ebx[5], 1)
    sub_418dd8(ebx[4])
    sub_418ee4(ebx[4], 1)
    sub_419820(0, 0, ebx, arg1[0xf], arg1[0xe])
    int32_t edi = 0
    int32_t ebx_1 = 0
    int32_t result
    
    do
        int32_t eax_6
        eax_6.b = ebx_1.b
        result = eax_6 * 2
        
        if (arg1[result * 2 + 0x7e].b != 0)
            sub_491e20(arg1, ebx_1.b, edi)
            result = arg1[0xa9] - 1
            edi += result
        
        ebx_1 += 1
    while (ebx_1.b != 9)
    
    return result
}
