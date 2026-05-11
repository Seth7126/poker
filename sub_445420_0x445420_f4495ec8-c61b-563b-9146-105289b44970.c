// ============================================================
// 函数名称: sub_445420
// 虚拟地址: 0x445420
// WARP GUID: f4495ec8-c61b-563b-9146-105289b44970
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_43d524
// [被调用的父级函数]: 无
// ============================================================

int32_t __convention("regparm")sub_445420(int32_t* arg1, void* arg2)
{
    // 第一条实际指令: if (arg1[0x8c] == 0)
    if (arg1[0x8c] == 0)
        return (*(*arg1 - 0x10))()
    
    int32_t ecx
    int32_t result = sub_43d524(ecx, arg2)
    
    if (*(arg2 + 0xc) != 0)
        return result
    
    return (*(*arg1 - 0x10))()
}
