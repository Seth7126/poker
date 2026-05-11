// ============================================================
// 函数名称: sub_4d727c
// 虚拟地址: 0x4d727c
// WARP GUID: 3d3a4b15-3225-5f38-adc9-25d4455f3cbe
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_40422c, sub_4d7108, sub_4c1108, sub_403e4c, sub_403df8
// [被调用的父级函数]: sub_4d6bc8, sub_51d764
// ============================================================

void* __fastcallsub_4d727c(char** arg1, void* arg2)
{
    // 第一条实际指令: int32_t ebp
    int32_t ebp
    int32_t var_4 = ebp
    int32_t* ebp_1 = &var_4
    char** var_8 = arg1
    int32_t ebx
    int32_t var_c = ebx
    sub_40422c(arg2)
    int32_t* var_10 = &var_4
    int32_t (* var_14)(void* arg1, void* arg2) = j_sub_4037f0
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    fsbase->NtTib.ExceptionList = &ExceptionList
    
    if (*(data_780c58 + 4) == 7)
        void* ebp_2 = sub_4d7108(0x4d765c, 0x4d7658, arg1)
        void* ebp_3 = sub_4d7108(0x4d7668, 0x4d7664, &var_4)
        void* ebp_4 = sub_4d7108(0x4d7674, 0x4d7670, ebp_2)
        void* ebp_5 = sub_4d7108(0x4d7680, 0x4d767c, ebp_3)
        void* ebp_6 = sub_4d7108(0x4d768c, 0x4d7688, ebp_4)
        void* ebp_7 = sub_4d7108(0x4d7698, 0x4d7694, ebp_5)
        void* ebp_8 = sub_4d7108(0x4d76a4, 0x4d76a0, ebp_6)
        void* ebp_9 = sub_4d7108(0x4d76b0, 0x4d76ac, ebp_7)
        sub_4c1108()
        void* ebp_33 = sub_4d7108("\n@straight2", 0x4d7798, ebp_8)
        void* ebp_34 = sub_4d7108("\t@straight", 0x4d7780, ebp_9)
        void* ebp_35 = sub_4d7108(0x4d76c0, 0x4d7714, ebp_33)
        void* ebp_36 = sub_4d7108(0x4d76d0, 0x4d7728, ebp_34)
        void* ebp_37 = sub_4d7108(0x4d76e0, 0x4d7738, ebp_35)
        void* ebp_38 = sub_4d7108(0x4d76ec, 0x4d7748, ebp_36)
        void* ebp_39 = sub_4d7108(0x4d76fc, 0x4d7758, ebp_37)
        void* ebp_40 = sub_4d7108(0x4d770c, 0x4d7768, ebp_38)
        void* ebp_41 = sub_4d7108(0x4d7720, 0x4d76b8, ebp_39)
        void* ebp_42 = sub_4d7108(0x4d7730, 0x4d76c8, ebp_40)
        void* ebp_43 = sub_4d7108(0x4d7740, 0x4d76d8, ebp_41)
        void* ebp_44 = sub_4d7108(0x4d7750, 0x4d76e8, ebp_42)
        int32_t var_1c_46 = sub_4d7108(0x4d7760, 0x4d76f4, ebp_43)
        ebp_1 = sub_4d7108(0x4d7778, 0x4d7704, ebp_44)
    else if (data_61d0fc == 2)
        void* ebp_46 = sub_4d7108(0x4d78b0, 0x4d78a8, arg1)
        void* ebp_47 = sub_4d7108(0x4d78c0, 0x4d78b8, &var_4)
        void* ebp_48 = sub_4d7108(0x4d78d0, 0x4d78c4, ebp_46)
        int32_t var_1c_51 = sub_4d7108(0x4d78e0, 0x4d78d8, ebp_47)
        ebp_1 = sub_4d7108(0x4d78f0, 0x4d78e8, ebp_48)
    
    sub_403e4c(arg1, ebp_1[-1])
    fsbase->NtTib.ExceptionList = ExceptionList
    int32_t (__stdcall* var_10_1)(int32_t arg1, int32_t arg2) = sub_4d7652
    sub_403df8(&ebp_1[-1])
    return &ebp_1[-1]
}
