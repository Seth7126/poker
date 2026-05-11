// ============================================================
// 函数名称: sub_4381c4
// 虚拟地址: 0x4381c4
// WARP GUID: bb5414e3-3d26-5bad-b9f6-f521ed1bd227
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: ImageList_Write
// [内部子函数调用]: sub_403828, sub_4030d0, sub_416764, sub_437290, sub_40b56c
// [被调用的父级函数]: sub_437dd0, sub_437c84
// ============================================================

int32_t __convention("regparm")sub_4381c4(int32_t* arg1, int32_t arg2)
{
    // 第一条实际指令: int32_t ebp
    int32_t ebp
    int32_t var_4 = ebp
    int32_t ecx
    int32_t var_8 = ecx
    int32_t ebx
    int32_t var_c = ebx
    int32_t ecx_1 = arg2
    arg2.b = 1
    int32_t* pstm_1 = sub_416764(ecx_1, arg2, &data_40f5ec, 0)
    int32_t* var_10_1 = &var_4
    int32_t (* var_14)(void* arg1, void* arg2) = j_sub_4037f0
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    fsbase->NtTib.ExceptionList = &ExceptionList
    int32_t* pstm = pstm_1
    
    if (pstm != 0)
        pstm -= 0xffffffec
    
    BOOL eax_2
    int32_t edx
    eax_2, edx = ImageList_Write(sub_437290(arg1), pstm)
    
    if (eax_2 != 0)
        fsbase->NtTib.ExceptionList = ExceptionList
        int32_t (__stdcall* var_10_2)(int32_t arg1, int32_t arg2) = sub_43823c
        return sub_4030d0(pstm_1)
    
    edx.b = 1
    sub_40b56c(sub_40e812+0x5e, edx, data_530348)
    sub_403828()
    noreturn
}
