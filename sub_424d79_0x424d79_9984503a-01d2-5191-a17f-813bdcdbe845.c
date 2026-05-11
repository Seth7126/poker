// ============================================================
// 函数名称: sub_424d79
// 虚拟地址: 0x424d79
// WARP GUID: 9984503a-01d2-5191-a17f-813bdcdbe845
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: SendMessageA
// [内部子函数调用]: sub_4318d0
// [被调用的父级函数]: 无
// ============================================================

LRESULT __fastcallsub_424d79(int32_t arg1, uint32_t* arg2, char* arg3 @ eax, int32_t arg4)
{
    // 第一条实际指令: *arg3 += arg3.b
    *arg3 += arg3.b
    *arg3 += arg3.b
    *arg3 += arg3.b
    void* entry_ebx
    *(entry_ebx + 0x56) += arg2.b
    *arg2 = zx.d((SendMessageA(sub_4318d0(arg3), 0xb0, 0, 0) u>> 0x10).w)
    arg2[1] = SendMessageA(sub_4318d0(arg3), 0xc9, *arg2, 0)
    LRESULT result = SendMessageA(sub_4318d0(arg3), 0xbb, 0xffffffff, 0)
    *arg2 -= result
    return result
}
