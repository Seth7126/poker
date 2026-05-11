// ============================================================
// 函数名称: sub_49af78
// 虚拟地址: 0x49af78
// WARP GUID: d3489055-caca-5e0d-a33c-274f8d0443ad
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_403e4c, sub_405ae8, sub_403e1c, sub_403df8, sub_409ae0
// [被调用的父级函数]: sub_49c840, sub_49af67
// ============================================================

int32_t __fastcallsub_49af78(int32_t* arg1, int32_t arg2)
{
    // 第一条实际指令: int32_t ebp
    int32_t ebp
    int32_t var_4 = ebp
    int32_t ebx
    int32_t var_20 = ebx
    int32_t esi
    int32_t var_24 = esi
    char* var_8 = nullptr
    char* var_c = nullptr
    int32_t* var_28 = &var_4
    int32_t (* var_2c)(void* arg1, void* arg2) = j_sub_4037f0
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    fsbase->NtTib.ExceptionList = &ExceptionList
    sub_403df8(arg1)
    
    if (arg2 - 0x2714 u<= 0x3e)
        switch (arg2)
            case 0x2714
                sub_405ae8(data_52ff74, arg1)
            case 0x2719
                sub_405ae8(data_53021c, arg1)
            case 0x271d
                sub_405ae8(data_530460, arg1)
            case 0x271e
                sub_405ae8(data_530294, arg1)
            case 0x2726
                sub_405ae8(data_5306b8, arg1)
            case 0x2728
                sub_405ae8(data_53097c, arg1)
            case 0x2733
                sub_405ae8(data_530978, arg1)
            case 0x2734
                sub_405ae8(data_530188, arg1)
            case 0x2735
                sub_405ae8(data_53056c, arg1)
            case 0x2736
                sub_405ae8(data_530800, arg1)
            case 0x2737
                sub_405ae8(data_5305c4, arg1)
            case 0x2738
                sub_405ae8(data_52ff0c, arg1)
            case 0x2739
                sub_405ae8(data_530100, arg1)
            case 0x273a
                sub_405ae8(data_52ff40, arg1)
            case 0x273b
                sub_405ae8(data_53038c, arg1)
            case 0x273c
                sub_405ae8(data_5304f0, arg1)
            case 0x273d
                sub_405ae8(data_530624, arg1)
            case 0x273e
                sub_405ae8(data_530698, arg1)
            case 0x273f
                sub_405ae8(data_530520, arg1)
            case 0x2740
                sub_405ae8(data_53090c, arg1)
            case 0x2741
                sub_405ae8(data_52ff70, arg1)
            case 0x2742
                sub_405ae8(data_5301a0, arg1)
            case 0x2743
                sub_405ae8(data_5300c8, arg1)
            case 0x2744
                sub_405ae8(data_530254, arg1)
            case 0x2745
                sub_405ae8(data_530914, arg1)
            case 0x2746
                sub_405ae8(data_5305f8, arg1)
            case 0x2747
                sub_405ae8(data_530720, arg1)
            case 0x2748
                sub_405ae8(data_53092c, arg1)
            case 0x2749
                sub_405ae8(data_530388, arg1)
            case 0x274a
                sub_405ae8(data_530238, arg1)
            case 0x274b
                sub_405ae8(data_5307bc, arg1)
            case 0x274c
                sub_405ae8(data_530670, arg1)
            case 0x274d
                sub_405ae8(data_530154, arg1)
            case 0x274e
                sub_405ae8(data_53048c, arg1)
            case 0x274f
                sub_405ae8(data_530234, arg1)
            case 0x2750
                sub_405ae8(data_5307fc, arg1)
            case 0x2751
                sub_405ae8(data_5306fc, arg1)
            case 0x2752
                sub_405ae8(data_53063c, arg1)
    
    sub_405ae8(data_52ff00, &var_c)
    char* eax_42 = var_c
    int32_t var_1c = arg2
    char var_18 = 0
    int32_t var_14 = *arg1
    char var_10 = 0xb
    sub_409ae0(1, &var_1c, eax_42, &var_8)
    sub_403e4c(arg1, var_8)
    fsbase->NtTib.ExceptionList = ExceptionList
    int32_t (* var_28_1)(int32_t* arg1 @ ebp, int32_t arg2) = sub_49b379
    return sub_403e1c(&var_c, 2)
}
