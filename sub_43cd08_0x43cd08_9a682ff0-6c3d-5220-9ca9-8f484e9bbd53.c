// ============================================================
// 函数名称: sub_43cd08
// 虚拟地址: 0x43cd08
// WARP GUID: 9a682ff0-6c3d-5220-9ca9-8f484e9bbd53
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_43ccd8, sub_43df70, sub_403248
// [被调用的父级函数]: sub_43d934, sub_4457a8
// ============================================================

int32_t __convention("regparm")sub_43cd08(int32_t* arg1, int32_t arg2, int32_t arg3)
{
    // 第一条实际指令: int32_t var_14 = arg3
    int32_t var_14 = arg3
    var_14.b = arg3.b
    int32_t ebx
    ebx.b = 1
    
    if (var_14.b != 0)
        ebx = 0
    
    if (ebx.b == 1 && sub_403248(arg1, 0x438e1c) != 0 && arg2 == (*(*arg1 + 0x34))(var_14))
        return sub_43df70(arg1)
    
    void* i
    
    for (i = sub_43ccd8(arg1); i != 0; i = *(i + 0x58))
        if (*(i + 0x48) != 0)
            break
    
    if (i == 0)
        return 0
    
    return *(i + 0x48)
}
