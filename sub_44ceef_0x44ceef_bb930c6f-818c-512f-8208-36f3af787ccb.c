// ============================================================
// 函数名称: sub_44ceef
// 虚拟地址: 0x44ceef
// WARP GUID: bb930c6f-818c-512f-8208-36f3af787ccb
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: GlobalDeleteAtom
// [内部子函数调用]: sub_404780
// [被调用的父级函数]: 无
// ============================================================

int32_t __convention("regparm")sub_44ceef(char* arg1, int32_t arg2, int16_t arg3, int32_t arg4 @ ebp, int32_t arg5 @ edi)
{
    // 第一条实际指令: arg1[arg5 + 0x53] += arg3:1.b
    arg1[arg5 + 0x53] += arg3:1.b
    *arg1 += arg1.b
    *arg1 += arg1.b
    char* entry_ebx
    entry_ebx[arg4 << 3] += arg3:1.b
    int32_t var_4 = arg2
    *(entry_ebx + arg1) += entry_ebx.b
    char* var_8 = entry_ebx
    *arg1 += arg1.b
    *arg1 += arg1.b
    *arg1 += arg3:1.b
    char** var_c = &var_8
    int32_t (* var_10)(void* arg1, void* arg2) = j_sub_4037f0
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    fsbase->NtTib.ExceptionList = &ExceptionList
    int32_t temp1 = data_53181c
    data_53181c += 1
    
    if (temp1 == 0xffffffff)
        if (data_52eac8 != 0)
            GlobalDeleteAtom(data_52eac8)
        
        sub_404780(&data_52eaf4, sub_4010c0, 0xb)
    
    fsbase->NtTib.ExceptionList = ExceptionList
    return 0
}
