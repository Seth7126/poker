// ============================================================
// 函数名称: sub_4374b4
// 虚拟地址: 0x4374b4
// WARP GUID: 021f8a62-e515-578e-9413-499a0c12e04c
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: ImageList_Remove
// [内部子函数调用]: sub_403828, sub_437154, sub_4032ac, sub_437490, sub_437290, sub_405ae8, sub_403df8, sub_40b4b0
// [被调用的父级函数]: sub_437540
// ============================================================

char** __convention("regparm")sub_4374b4(int32_t* arg1, int32_t arg2)
{
    // 第一条实际指令: int32_t ebp
    int32_t ebp
    int32_t var_4 = ebp
    char* var_8 = nullptr
    int32_t ebx
    int32_t var_c = ebx
    int32_t esi
    int32_t var_10 = esi
    int32_t* var_14 = &var_4
    int32_t (* var_18)(void* arg1, void* arg2) = j_sub_4037f0
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    fsbase->NtTib.ExceptionList = &ExceptionList
    
    if (arg2 s>= sub_437490(arg1))
        sub_405ae8(data_5301fc, &var_8)
        int32_t edx_1
        edx_1.b = 1
        sub_40b4b0(sub_40eacb+0x7d, edx_1, var_8)
        sub_403828()
        noreturn
    
    if (sub_437154(arg1) != 0)
        ImageList_Remove(sub_437290(arg1), arg2)
    
    int32_t* ebx_1
    ebx_1.w = 0xfff0
    sub_4032ac(arg1)
    fsbase->NtTib.ExceptionList = var_8
    __return_addr = sub_43753a
    char** result = &var_8
    sub_403df8(result)
    return result
}
