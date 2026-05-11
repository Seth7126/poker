// ============================================================
// 函数名称: sub_491bb8
// 虚拟地址: 0x491bb8
// WARP GUID: 9681d216-481e-51bd-8641-b8f4eb7f98a4
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_4030d0
// [被调用的父级函数]: sub_4919ca
// ============================================================

int32_t __convention("regparm")sub_491bb8(int32_t arg1)
{
    // 第一条实际指令: int32_t ecx
    int32_t ecx
    int32_t var_c = ecx
    var_c.b = 0
    int32_t result
    
    do
        int32_t ebx_1 = 0
        
        do
            int32_t eax
            eax.b = var_c.b
            int32_t edx_1
            edx_1.b = ebx_1.b
            result = sub_4030d0(*(arg1 + eax * 0x10 + (edx_1 << 2) + 0x1fc))
            ebx_1 += 1
        while (ebx_1.b != 3)
        
        var_c.b += 1
    while (var_c.b != 9)
    
    return result
}
