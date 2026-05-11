// ============================================================
// 函数名称: sub_495150
// 虚拟地址: 0x495150
// WARP GUID: d1925c79-5236-5abf-8d26-1f3e326090ef
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: htons, WSAAsyncGetHostByName, inet_addr, WSAAsyncGetServByName
// [内部子函数调用]: sub_403828, sub_494e64, sub_403e4c, sub_40423c, sub_4956a4, sub_495150, sub_4955b8, sub_40b56c, sub_495638, sub_40886c
// [被调用的父级函数]: sub_495150, sub_495b60, sub_495a58, sub_49630c
// ============================================================

int32_t __fastcallsub_495150(int32_t arg1, int32_t arg2, int32_t* arg3 @ eax, int32_t arg4, int32_t arg5, int16_t arg6, int32_t arg7)
{
    // 第一条实际指令: int32_t var_8 = arg1
    int32_t var_8 = arg1
    int32_t __saved_ebp
    int32_t* var_18 = &__saved_ebp
    int32_t (* var_1c)() = j_sub_40353c
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    fsbase->NtTib.ExceptionList = &ExceptionList
    int32_t* eax
    eax.b = *(arg3 + 0x29)
    char temp1 = eax.b
    eax.b -= 1
    
    if (temp1 u>= 1)
        if (temp1 != 1)
            char temp2_1 = eax.b
            eax.b -= 1
            
            if (temp2_1 == 1)
                *(arg3 + 0x29) = 0
                
                if (arg4.b == 0)
                    sub_4955b8(arg3, arg5)
                else
                    sub_495638(arg3)
            
            goto label_49533c
        
        if (arg7 == 0)
            *(arg3 + 0x29) = 2
            int32_t* eax_36
            eax_36.w = arg6
            *(arg3 + 0x1a) = htons(eax_36)
            goto label_49533c
        
        if (arg3[0x11] == 0)
            arg3[0x11] = sub_40886c(0x400)
        
        int32_t eax_27 = arg3[0x11]
        int32_t eax_29 = sub_40423c(arg7)
        int32_t eax_32 = WSAAsyncGetServByName(sub_4956a4(arg3), 0x403, eax_29, 0x4953a8, eax_27, 0x400)
        arg3[0xb] = eax_32
        int32_t* eax_33
        eax_33.b = eax_32 == 0
        *(*(sub_494e64(eax_33 & 0x7f) - 4) + 0x29) = 2
        fsbase->NtTib.ExceptionList = ExceptionList
    else if (arg4.b != 0)
        if (arg2 == 0)
            if (arg1 != 0)
                *(arg3 + 0x29) = 1
                arg3[7] = inet_addr(sub_40423c(arg1))
                goto label_49533c
            
            arg2.b = 1
            sub_40b56c(0x4940dc, arg2, data_52febc)
            sub_403828()
            noreturn
        
        if (arg3[0x11] == 0)
            arg3[0x11] = sub_40886c(0x400)
        
        int32_t eax_6 = arg3[0x11]
        int32_t eax_8 = sub_40423c(arg2)
        int32_t eax_11 = WSAAsyncGetHostByName(sub_4956a4(arg3), 0x403, eax_8, eax_6, 0x400)
        arg3[0xb] = eax_11
        int32_t* eax_12
        eax_12.b = eax_11 == 0
        void* ebp_1 = sub_494e64(eax_12 & 0x7f)
        sub_403e4c(*(ebp_1 - 4) + 0x4c, *(ebp_1 + 0x14))
        *(*(ebp_1 - 4) + 0x50) = *(ebp_1 + 0x10)
        *(*(ebp_1 - 4) + 0x54) = *(ebp_1 + 0xc)
        *(*(ebp_1 - 4) + 0x52) = arg4.b
        *(*(ebp_1 - 4) + 0x29) = 1
        fsbase->NtTib.ExceptionList = ExceptionList
    else
        *(arg3 + 0x29) = 1
        arg3[7] = 0
    label_49533c:
        
        if (*(arg3 + 0x29) != 0)
            int32_t eax_42
            eax_42.w = arg6
            sub_495150(arg4, arg5, eax_42, arg7)
        
        fsbase->NtTib.ExceptionList = ExceptionList
    
    return 0
}
