// ============================================================
// 函数名称: sub_41eb67
// 虚拟地址: 0x41eb67
// WARP GUID: b31ec118-b852-5501-889f-efa1f5243467
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_4030d0, sub_403844, sub_41e5a0, sub_403898, sub_40276c
// [被调用的父级函数]: 无
// ============================================================

int32_tsub_41eb67(void* arg1 @ ebp, int32_t* arg2, void* arg3)
{
    // 第一条实际指令: sub_4030d0(*(arg1 - 0x38))
    sub_4030d0(*(arg1 - 0x38))
    sub_403844()
    sub_403898(arg2)
    TEB* fsbase
    fsbase->NtTib.ExceptionList = arg2
    sub_40276c(*(arg1 - 0x18))
    void* eax_1
    eax_1.b = *(arg1 - 0x21)
    int32_t* ebp =
        sub_41e5a0(*(arg1 - 4), *(arg1 - 0x28), *(arg1 - 0x30), *(arg1 - 0x38), eax_1.b, arg1 - 0x9c)
    int32_t eax_5
    eax_5.b = (*(*ebp[-1] + 0x24))() != 0
    *(ebp[-1] + 0x1a) = eax_5.b
    ebp[-1]
    int32_t result = (*(*ebp[-1] + 0x10))()
    *ebp
    return result
}
