// ============================================================
// 函数名称: sub_421404
// 虚拟地址: 0x421404
// WARP GUID: 857c1fcd-8b5e-56f2-a265-5241e7362f32
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: 无
// [被调用的父级函数]: 无
// ============================================================

int32_t __convention("regparm")sub_421404(char* arg1, int16_t arg2, char* arg3, uint16_t* arg4 @ esi)
{
    // 第一条实际指令: *arg1 += arg1.b
    *arg1 += arg1.b
    *arg1 += 1
    int32_t eflags
    char temp0
    char temp1
    temp0, temp1, eflags = __aam_immb(0x42, arg1.b)
    arg1.b = temp0
    arg1:1.b = temp1
    *arg1 += arg1.b
    *arg1 += arg1.b
    *arg3 = *arg3
    *arg1 += arg1.b
    *__return_addr
    __outsb(arg2, *arg4, arg4, eflags)
    *(__return_addr + 2)
    *(__return_addr + 6)
    void* ebp = *(__return_addr + 0xa)
    *(__return_addr + 0x12)
    char* edx = *(__return_addr + 0x16)
    *(__return_addr + 0x1a)
    int16_t eax = (*(__return_addr + 0x1e)).w
    __bound_gprv_mema32(ebp, *(ebp + 0x64))
    int32_t eax_1 = sx.d(eax)
    *edx += 0x28
    *eax_1 += eax_1
    undefined
}
