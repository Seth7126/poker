// ============================================================
// 函数名称: sub_4ab790
// 虚拟地址: 0x4ab790
// WARP GUID: 0788656d-6353-544b-a563-a2986cd367e9
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_4aab0c
// [被调用的父级函数]: sub_4ab4f8
// ============================================================

void __convention("regparm")sub_4ab790(void* arg1, char arg2, int32_t arg3)
{
    // 第一条实际指令: int32_t var_8 = arg3
    int32_t var_8 = arg3
    var_8:3.b = arg2
    void* ebx = arg1
    int32_t esi = *(ebx + 0x24)
    
    if (esi == 0)
        return 
    
    if (arg3.b == 0)
        arg1.b = var_8:3.b
        (*data_530108)(esi, sub_4aab0c(arg1.b), 0)
    else
        arg1.b = var_8:3.b
        (*data_530108)(esi, sub_4aab0c(arg1.b), sub_4aab30)
    
    (*data_5304e0)(*(ebx + 0x24), *(ebx + 0x14))
}
