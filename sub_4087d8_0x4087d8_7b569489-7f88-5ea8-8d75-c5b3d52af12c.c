// ============================================================
// 函数名称: sub_4087d8
// 虚拟地址: 0x4087d8
// WARP GUID: 7b569489-7f88-5ea8-8d75-c5b3d52af12c
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: 无
// [被调用的父级函数]: sub_409d14, sub_409ee8
// ============================================================

int32_t __fastcallsub_4087d8(int16_t* arg1, int16_t arg2, int32_t arg3 @ eax, uint16_t* arg4)
{
    // 第一条实际指令: uint16_t edx_1 = (arg3 u>> 0x10).w
    uint16_t edx_1 = (arg3 u>> 0x10).w
    uint16_t temp1 = modu.dp.w(edx_1:(arg3.w), arg2)
    arg3.w = divu.dp.w(edx_1:(arg3.w), arg2)
    *arg1 = arg3.w
    *arg4 = temp1
    return arg3
}
