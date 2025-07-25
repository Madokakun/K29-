import yfinance as yf
import mplfinance as mpf
import schedule
import time
import datetime

def fetch_and_plot():
    now = datetime.datetime.now().strftime("%H:%M:%S")
    print(f"[{now}] Cập nhật biểu đồ...")

    # Lấy dữ liệu vàng từ Yahoo – loại bỏ dữ liệu thiếu (NaN)
    df = yf.download("GC=F", period="5d", interval="15m", progress=False).dropna()

    if df.empty:
        print("Không lấy được dữ liệu! Thử lại sau.")
        return

    # Tùy chỉnh màu nến
    mc = mpf.make_marketcolors(up='green', down='red', edge='inherit', wick='inherit')
    s = mpf.make_mpf_style(marketcolors=mc)

    mpf.plot(
        df.tail(100),
        type='candle',
        style=s,
        title='GC=F – Gold Futures – Biểu đồ nến 15 phút',
        mav=(10, 20),
        tight_layout=True,
        volume=False,
        show_nontrading=False
    )

print("🟢 Script chạy; nhấn Ctrl+C để dừng.")
fetch_and_plot()

schedule.every(5).minutes.do(fetch_and_plot)

while True:
    schedule.run_pending()
    time.sleep(1)
