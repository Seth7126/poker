// ============================================================
// 函数名称: sub_4160a0
// 虚拟地址: 0x4160a0
// WARP GUID: 7f45fc3a-8617-5bb0-9e0a-85588e66d702
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: 无
// [被调用的父级函数]: sub_437dd0, sub_43a060
// ============================================================

int32_t __convention("regparm")sub_4160a0(void* arg1, int32_t* arg2)
{
    // 第一条实际指令: int32_t ecx
    int32_t ecx
    int32_t var_8 = ecx
    void* var_8_1 = nullptr
    void* eax = arg2[8]
    
    if (eax != 0)
        var_8_1 = *(eax + 0x18)
    
    eax.w = *(arg1 + 0x18)
    ecx.b = eax.w != var_8_1.w
    (*(*arg2 + 4))(sub_415e74, arg1, sub_415e4c, arg1)
    int32_t ecx_1
    ecx_1.b = var_8_1:2.w != *(arg1 + 0x1a)
    return (*(*arg2 + 4))(sub_415e80, arg1, sub_415e60, arg1)
}
