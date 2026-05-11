// ============================================================
// 函数名称: sub_42faf4
// 虚拟地址: 0x42faf4
// WARP GUID: 14e84549-670b-5e2b-b55e-678c106909b4
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_42f544
// [被调用的父级函数]: sub_4421d0
// ============================================================

int32_t __convention("regparm")sub_42faf4(int32_t* arg1, int32_t* arg2)
{
    // 第一条实际指令: arg2[2]
    arg2[2]
    int32_t ecx
    char result = sub_42f544(ecx, arg2)
    
    if (result != 0)
        return result
    
    return (*(*arg1 - 0x10))()
}
