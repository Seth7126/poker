// ============================================================
// 函数名称: sub_44a448
// 虚拟地址: 0x44a448
// WARP GUID: 0e757944-c402-5437-a516-6e8fc5c11c66
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_42c754, sub_436b6c, sub_403248
// [被调用的父级函数]: sub_448668
// ============================================================

int32_t __convention("regparm")sub_44a448(void* arg1, int32_t arg2, int32_t* arg3)
{
    // 第一条实际指令: int32_t var_18 = arg2
    int32_t var_18 = arg2
    void* edi = *(data_5317dc + 0x60)
    
    if (edi != 0)
        sub_42c754(edi, arg3)
    
    void* ebp_1 = *(arg1 + 0x38)
    
    if (edi != ebp_1 && ebp_1 != 0)
        sub_42c754(ebp_1, arg3)
    
    char result = 0
    
    if (result == 0 && sub_403248(arg3, &data_436278) != 0 && *(arg3 + 0x59) != 0 && arg3[0x14].b != 0)
        void* const edx_2
        edx_2.b = *(arg3 + 0x32) != 0
        sub_436b6c(arg3, edx_2)
    
    return result
}
