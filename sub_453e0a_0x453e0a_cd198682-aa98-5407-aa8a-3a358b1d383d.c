// ============================================================
// 函数名称: sub_453e0a
// 虚拟地址: 0x453e0a
// WARP GUID: cd198682-aa98-5407-aa8a-3a358b1d383d
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_419868, sub_453ff8, sub_403898, sub_45380c
// [被调用的父级函数]: 无
// ============================================================

int32_t __fastcallsub_453e0a(char arg1, int32_t* arg2, int32_t* arg3 @ eax, void* arg4 @ ebp, char* arg5 @ esi, int32_t arg6 @ edi, int32_t arg7, int32_t arg8)
{
    // 第一条实际指令: *arg3 += arg3
    *arg3 += arg3
    *arg3 += arg3.b
    
    if (arg3 s>= 0xffffffff)
        return sub_419868(arg2, arg6, sub_453ff8(arg3 + 1))
    
    *arg5 += arg2.b
    void* entry_ebx
    *(entry_ebx + 0x3ee8fc45) += arg1
    *(arg3 + 1) += (arg3 + 1).b
    sub_403898()
    TEB* fsbase
    fsbase->NtTib.ExceptionList = __return_addr
    arg8 = 0x453e43
    return sub_45380c(arg4 - 0x27b)
}
