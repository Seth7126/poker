// ============================================================
// 函数名称: sub_41b19f
// 虚拟地址: 0x41b19f
// WARP GUID: a1ce708c-6280-5911-8038-345a3a399523
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_41b1ac
// [被调用的父级函数]: 无
// ============================================================

char* __stdcallsub_41b19f(int32_t* arg1 @ eax, int32_t arg2, int32_t* arg3, int32_t arg4, int32_t* arg5, int32_t arg6, char* arg7, int32_t arg8, int32_t arg9, int32_t arg10)
{
    // 第一条实际指令: *(arg1 * 2) += 1
    *(arg1 * 2) += 1
    *arg1 += arg1.b
    
    if (&__return_addr != 0xffffffff)
        *arg7 += arg7.b
        *arg7 += arg7.b
        return sub_41b1ac(arg7, arg5) __tailcall
    
    int32_t* edx
    edx:1.b = arg5:1.b + arg7[0xff458801]
    char* result
    result.b = *(arg3 - 1)
    *arg3
    return result
}
