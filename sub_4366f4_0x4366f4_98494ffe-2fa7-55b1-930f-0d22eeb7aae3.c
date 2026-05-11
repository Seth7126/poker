// ============================================================
// 函数名称: sub_4366f4
// 虚拟地址: 0x4366f4
// WARP GUID: 98494ffe-2fa7-55b1-930f-0d22eeb7aae3
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_410580, sub_43647c, sub_403260
// [被调用的父级函数]: 无
// ============================================================

int32_t __convention("regparm")sub_4366f4(void* arg1, int32_t* arg2, int32_t arg3)
{
    // 第一条实际指令: int32_t result = sub_410580(*(arg1 + 0x24), arg2)
    int32_t result = sub_410580(*(arg1 + 0x24), arg2)
    
    if (result s< 0)
        return result
    
    sub_403260(arg2, &data_43607c)
    return sub_43647c(arg2, arg3)
}
