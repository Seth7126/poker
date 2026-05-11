// ============================================================
// 函数名称: sub_49bc60
// 虚拟地址: 0x49bc60
// WARP GUID: 23f204a3-a038-5298-ac28-c471a68ad8d4
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_40423c, sub_49ada4
// [被调用的父级函数]: 无
// ============================================================

int32_t __convention("regparm")sub_49bc60(int32_t* arg1, int32_t arg2)
{
    // 第一条实际指令: void* eax_4 = (*data_5303d4)(sub_40423c(arg2))
    void* eax_4 = (*data_5303d4)(sub_40423c(arg2))
    
    if (eax_4 == 0)
        return sub_49ada4()
    
    char* eax_8 = **(eax_4 + 0xc)
    char var_c_1 = *eax_8
    char var_b_1 = eax_8[1]
    char var_a_1 = eax_8[2]
    eax_8.b = eax_8[3]
    char var_9_1 = eax_8.b
    return (*(*arg1 + 0x7c))()
}
