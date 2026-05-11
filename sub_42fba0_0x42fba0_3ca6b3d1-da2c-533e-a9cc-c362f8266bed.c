// ============================================================
// 函数名称: sub_42fba0
// 虚拟地址: 0x42fba0
// WARP GUID: 3ca6b3d1-da2c-533e-a9cc-c362f8266bed
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_42f544
// [被调用的父级函数]: 无
// ============================================================

int32_t __convention("regparm")sub_42fba0(int32_t* arg1, int32_t* arg2)
{
    // 第一条实际指令: *(arg2[2] + 4)
    *(arg2[2] + 4)
    int32_t ecx
    char result = sub_42f544(ecx, arg2)
    
    if (result != 0)
        return result
    
    return (*(*arg1 - 0x10))()
}
