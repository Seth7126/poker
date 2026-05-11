// ============================================================
// 函数名称: sub_42a224
// 虚拟地址: 0x42a224
// WARP GUID: 45fe431e-0677-5bfb-9f8d-831f3b5c9f9c
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_4030a0, sub_4103c8
// [被调用的父级函数]: sub_42e618
// ============================================================

int32_t __convention("regparm")sub_42a224(int32_t* arg1, int32_t arg2)
{
    // 第一条实际指令: int32_t esi = arg2
    int32_t esi = arg2
    
    if (*arg1 == 0)
        arg2.b = 1
        int32_t ecx
        *arg1 = sub_4030a0(ecx, arg2)
    
    return sub_4103c8(*arg1, esi)
}
