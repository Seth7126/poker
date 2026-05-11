// ============================================================
// 函数名称: sub_409aac
// 虚拟地址: 0x409aac
// WARP GUID: 2fb5cad2-5cb6-5a20-8339-cb677a4517dc
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_409680, sub_4093b0
// [被调用的父级函数]: sub_40b250
// ============================================================

char* __fastcallsub_409aac(char* arg1, void* arg2, char* arg3 @ eax, int32_t arg4, int32_t arg5)
{
    // 第一条实际指令: int32_t var_14 = sub_4093b0(arg1)
    int32_t var_14 = sub_4093b0(arg1)
    int32_t var_18 = arg5
    *(arg3 + sub_409680(arg1, arg2, arg3, arg1, arg2, arg4)) = 0
    return arg3
}
