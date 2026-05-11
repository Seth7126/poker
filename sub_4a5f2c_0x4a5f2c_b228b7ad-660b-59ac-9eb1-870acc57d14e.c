// ============================================================
// 函数名称: sub_4a5f2c
// 虚拟地址: 0x4a5f2c
// WARP GUID: b228b7ad-660b-59ac-9eb1-870acc57d14e
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_403e4c, sub_408ebc, sub_404078
// [被调用的父级函数]: sub_4a5d10
// ============================================================

int32_t __convention("regparm")sub_4a5f2c(void* arg1, char* arg2)
{
    // 第一条实际指令: int32_t ecx = sub_403e4c(arg1 + 0x14, arg2)
    int32_t ecx = sub_403e4c(arg1 + 0x14, arg2)
    int32_t result = sub_404078(arg2)
    
    if (result s> 0)
        result = sub_408ebc(ecx, 0)
        *(arg1 + 0xc) = result
    
    return result
}
