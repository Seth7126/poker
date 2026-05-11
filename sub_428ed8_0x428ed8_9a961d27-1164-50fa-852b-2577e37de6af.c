// ============================================================
// 函数名称: sub_428ed8
// 虚拟地址: 0x428ed8
// WARP GUID: 9a961d27-1164-50fa-852b-2577e37de6af
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: ClientToScreen
// [内部子函数调用]: sub_429f30, sub_407800, sub_4298b4
// [被调用的父级函数]: sub_428e7c
// ============================================================

int32_t __fastcallsub_428ed8(int32_t arg1, int32_t* arg2)
{
    // 第一条实际指令: int32_t __saved_ebp
    int32_t __saved_ebp
    int32_t* var_1c = &__saved_ebp
    int32_t (* var_20)() = j_sub_40353c
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    fsbase->NtTib.ExceptionList = &ExceptionList
    int32_t eax = *arg2
    
    if (eax s> 0x215)
        if (eax == 0xbd00)
            int32_t eax_10 = arg2[1]
            
            if (eax_10 == 0x11)
                sub_4298b4(data_531764 + 0xc)
            else if (eax_10 == 0x1b)
                arg2[3] = 1
                sub_429f30(0)
        else if (eax == 0xbd01 && arg2[1] == 0x11)
            sub_4298b4(data_531764 + 0xc)
    else if (eax == 0x215)
        sub_429f30(0)
    else if (eax == 0x200)
        int32_t point
        sub_407800(arg2[2], &point)
        ClientToScreen(data_53176c, &point)
        sub_4298b4(&point)
    else if (eax == 0x202 || eax == 0x205)
        int32_t eax_2
        eax_2.b = 1
        sub_429f30(eax_2.b)
    
    fsbase->NtTib.ExceptionList = ExceptionList
    return 0
}
