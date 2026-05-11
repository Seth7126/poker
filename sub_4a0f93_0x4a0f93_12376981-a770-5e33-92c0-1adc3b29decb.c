// ============================================================
// 函数名称: sub_4a0f93
// 虚拟地址: 0x4a0f93
// WARP GUID: 12376981-a770-5e33-92c0-1adc3b29decb
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_4a0c78
// [被调用的父级函数]: 无
// ============================================================

int32_t __stdcallsub_4a0f93(int32_t arg1, char* arg2, char* arg3, uint16_t arg4, char* arg5, char* arg6)
{
    // 第一条实际指令: *0x72000000 += 1
    *0x72000000 += 1
    char* eax = arg6
    int32_t eflags
    uint8_t* edi_1
    uint8_t temp0
    temp0, edi_1 = __insb(__return_addr, arg4, eflags)
    *edi_1 = temp0
    int16_t* edi_2
    int16_t temp0_1
    temp0_1, edi_2 = __insd(edi_1, arg4, eflags)
    *edi_2 = temp0_1
    *eax += eax.b
    *arg3 += arg4:1.b
    char* ebx
    ebx.b = rol.b(arg3.b, 0x90)
    arg6 = arg2
    arg5 = ebx
    sub_4a0c78(eax)
    *(eax + 8) = 0
    return 0
}
