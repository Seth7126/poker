// ============================================================
// 函数名称: sub_50d0cf
// 虚拟地址: 0x50d0cf
// WARP GUID: ba3d7f7b-fc6b-5eb9-9e03-995adddc84b3
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: 无
// [被调用的父级函数]: 无
// ============================================================

int32_t __convention("regparm")sub_50d0cf(char* arg1, void* arg2 @ ebp, int32_t* arg3 @ esi)
{
    // 第一条实际指令: *arg3 += 1
    *arg3 += 1
    *arg1 += arg1.b
    void* entry_ebx
    *(entry_ebx + 0x6c) += arg1.b
    int32_t esp = *(arg2 + 0x6e) * 0x55000074
    *(esp - 4) = esp
    *(esp - 8) = j_sub_4037f0
    TEB* fsbase
    *(esp - 0xc) = fsbase->NtTib.ExceptionList
    fsbase->NtTib.ExceptionList = esp - 0xc
    data_7a7da0 += 1
    *(esp - 4)
    fsbase->NtTib.ExceptionList = *(esp - 0xc)
    *(esp - 4) = sub_50d108
    return 0
}
