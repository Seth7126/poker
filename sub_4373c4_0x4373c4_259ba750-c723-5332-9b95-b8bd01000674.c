// ============================================================
// 函数名称: sub_4373c4
// 虚拟地址: 0x4373c4
// WARP GUID: 259ba750-c723-5332-9b95-b8bd01000674
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: ImageList_Add
// [内部子函数调用]: sub_4372a0, sub_43715c, sub_4030d0, sub_41dae0
// [被调用的父级函数]: sub_437e28, sub_4377d0
// ============================================================

int32_t __convention("regparm")sub_4373c4(int32_t* arg1, int32_t* arg2, int32_t* arg3)
{
    // 第一条实际指令: int32_t ebp
    int32_t ebp
    int32_t var_4 = ebp
    int32_t ebx
    int32_t var_18 = ebx
    int32_t esi
    int32_t var_1c = esi
    int32_t* ebx_1 = arg2
    arg2.b = 1
    int32_t* eax
    int32_t edx
    eax, edx = sub_41dae0(sub_41799a+0xe2, arg2)
    int32_t* var_20 = &var_4
    int32_t (* var_24)(void* arg1, void* arg2) = j_sub_4037f0
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList_1 = fsbase->NtTib.ExceptionList
    fsbase->NtTib.ExceptionList = &ExceptionList_1
    edx.b = 1
    int32_t* eax_1 = sub_41dae0(sub_41799a+0xe2, edx)
    int32_t* var_2c = &var_4
    int32_t (* var_30)(void* arg1, void* arg2) = j_sub_4037f0
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    fsbase->NtTib.ExceptionList = &ExceptionList
    sub_43715c(arg1)
    HBITMAP hbmMask = sub_4372a0(arg1, arg3, eax_1)
    HBITMAP hbmImage = sub_4372a0(arg1, ebx_1, eax)
    int32_t var_c = ImageList_Add(arg1[0xc], hbmImage, hbmMask)
    fsbase->NtTib.ExceptionList = ExceptionList
    int32_t (* var_2c_1)(int32_t* arg1 @ ebp, int32_t arg2, int32_t arg3, int32_t arg4) = sub_43745d
    return sub_4030d0(eax_1)
}
