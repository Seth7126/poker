// ============================================================
// 函数名称: sub_4b3c7c
// 虚拟地址: 0x4b3c7c
// WARP GUID: b2c3e6c9-de1c-5401-93b7-23d7c111c57d
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_4b3c8c
// [被调用的父级函数]: 无
// ============================================================

int32_t __convention("regparm")sub_4b3c7c(char* arg1, char* arg2, int16_t arg3, int32_t arg4 @ ebp, char* arg5 @ esi, int32_t arg6 @ edi)
{
    // 第一条实际指令: *arg1 += arg1.b
    *arg1 += arg1.b
    *arg1 += arg1.b
    int16_t es
    uint32_t var_4 = zx.d(es)
    *arg1 += arg1.b
    void arg_47
    *(&arg_47 + arg6) += arg3:1.b
    char temp0 = *arg2
    *arg2 += arg3.b
    
    if (temp0 != neg.b(arg3.b))
        return sub_4b3c8c() __tailcall
    
    int32_t gsbase
    *(gsbase + &var_4 + arg6 + 0x4b) += arg4
    *arg1 += arg2:1.b
    *arg1 += arg1.b
    *arg1 += arg1.b
    *arg1 += arg1.b
    int32_t entry_ebx
    *arg5 += entry_ebx:1.b
    arg5[arg6] += (entry_ebx - 1):1.b
    *arg1 += arg1.b
    *arg1 += arg1.b
    *arg1 += arg1.b
    *arg1 += arg1.b
    *arg2 += (entry_ebx - 2).b
    *arg1 += arg3:1.b
    arg1[2] += arg2:1.b
    *arg1 += arg1.b
    undefined
}
