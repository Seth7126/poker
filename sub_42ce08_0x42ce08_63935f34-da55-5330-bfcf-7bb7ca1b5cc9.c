// ============================================================
// 函数名称: sub_42ce08
// 虚拟地址: 0x42ce08
// WARP GUID: 63935f34-da55-5330-bfcf-7bb7ca1b5cc9
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_4032ac, sub_440d94
// [被调用的父级函数]: sub_42ce44, sub_42cedc, sub_42cebc
// ============================================================

void __convention("regparm")sub_42ce08(int32_t* arg1, void* arg2, int32_t arg3)
{
    // 第一条实际指令: int32_t var_10 = arg3
    int32_t var_10 = arg3
    var_10.b = arg3.b
    
    if ((*(arg1 + 0x41) & 0x10) != 0)
        return 
    
    int32_t eax = sx.d(*(arg2 + 8))
    int32_t var_18_1 = sx.d(*(arg2 + 0xa))
    int32_t eax_1
    eax_1.w = *(arg2 + 4)
    int32_t eax_2
    int32_t edx
    eax_2, edx = sub_440d94(eax_1.w)
    edx.b = var_10.b
    int32_t ebx
    ebx.w = 0xffd8
    sub_4032ac(arg1, edx, eax_2, var_18_1, eax)
}
